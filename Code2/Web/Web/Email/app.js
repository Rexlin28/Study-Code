document.getElementById("sendButton").addEventListener("click", sendEmail);

async function sendEmail() {
  gapi.load('client:auth2', async () => {
    await gapi.client.init({
      clientId: "1240548338-j867hsc0o8b00fv895ife0jlu5ta6g74.apps.googleusercontent.com",
      discoveryDocs: ["https://www.googleapis.com/discovery/v1/apis/gmail/v1/rest"],
      scope: "https://www.googleapis.com/auth/gmail.send",
      clientSecret: "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",
      refreshToken: "1//04pyB9TaPRT8jCgYIARAAGAQSNwF-L9Irlf8X7KcyowXIaQaq_NOS4WcErcbHYkkWjAZss-4BS5jwdqgEaQCBIS_cS-8fw2b2124"
    });
    const oAuth2Client = gapi.auth2.getAuthInstance().currentUser.get().getAuthResponse(true);
    const accessToken = oAuth2Client.access_token;

    const gmail = gapi.client.gmail;

    const mailToSend = document.getElementById("Email").value;
    const subjectToSend = document.getElementById("Subject").value;
    const descriptionToSend = document.getElementById("Description").value;

    const email = {
      to: mailToSend,
      subject: subjectToSend,
      text: descriptionToSend,
    };

    try {
      const res = await gmail.users.messages.send({
        userId: 'me',
        requestBody: {
          raw: createMessage(email),
        },
        headers: {
          Authorization: `Bearer ${accessToken}`,
        },
      });
      console.log('Correo electrónico enviado con éxito', res);
    } catch (error) {
      console.error('Error al enviar el correo electrónico:', error);
    }
  });
}

function createMessage(email) {
  const message = [
    'Content-Type: text/plain; charset="UTF-8"\n',
    'MIME-Version: 1.0\n',
    `To: ${email.to}\n`,
    `Subject: ${email.subject}\n\n`,
    `${email.text}`,
  ].join('');

  return btoa(message).replace(/\+/g, '-').replace(/\//g, '_').replace(/=+$/, '');
}