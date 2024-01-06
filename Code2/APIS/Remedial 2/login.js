

const container = document.getElementById('container');
const registerBtn = document.getElementById('register');
const loginBtn = document.getElementById('login');
const fbSignUp = document.getElementById('fbSignUp');
const fbLogin = document.getElementById('fbLogin');




registerBtn.addEventListener('click', () => {
    container.classList.add("active");
    checkLoginState();
});

loginBtn.addEventListener('click', () => {
    container.classList.remove("active");
});



  window.fbAsyncInit = function() {
    FB.init({
      appId      : '1097812547803645',
      cookie     : true,
      xfbml      : true,
      version    : 'v18.0'
    });
      
    FB.AppEvents.logPageView();   
      
  };

  (function(d, s, id){
     var js, fjs = d.getElementsByTagName(s)[0];
     if (d.getElementById(id)) {return;}
     js = d.createElement(s); js.id = id;
     js.src = "https://connect.facebook.net/en_US/sdk.js";
     fjs.parentNode.insertBefore(js, fjs);
   }(document, 'script', 'facebook-jssdk'));



   function checkLoginState() {
    // El usuario está conectado a Facebook y ha autorizado a tu aplicación.
    var uid = FB.getUserID();
    var accessToken = FB.getAccessToken();
  
    // Obtén el nombre del usuario
    FB.api('/me', function(userInfo) {
      console.log('Usuario conectado: ' + userInfo.name);
    });
  }



  


fbLogin.addEventListener('click', function() {
    FB.login(function(response) {
        if (response.authResponse) {
          console.log('Hola!  Cargando la informacion.... ');
          FB.api('/me', function(response) {
            console.log('Buen Dia , ' + response.name + '.');
            updateWelcomePanel();
            getUserInfo();
          });
        } else {
          console.log('Usuario Cancelo el login o no se autorizo completamente.');
        }
      }, {scope: 'public_profile,email'});
  });
  
  fbSignUp.addEventListener('click', function() {
    FB.login(function(response) {
        if (response.authResponse) {
            console.log('Registrando al usuario... ');
            FB.api('/me', function(response) {
                console.log('Registrado con éxito: ' + response.name);
              
                // TODO: se puede enviar los datos del usuario al servidor para crear una cuenta.
            });
        } else {
            console.log('Usuario Cancelo el registro o no se autorizo completamente.');
        }
    }, {scope: 'public_profile,email'});
});

  function updateWelcomePanel() {
    FB.getLoginStatus(function (response) {
        const welcomePanel = document.querySelector('.toggle-panel.toggle-right');

        if (response.status === 'connected') {
            // El usuario está conectado a Facebook y ha autorizado a tu aplicación.
            FB.api('/me', 'GET', { fields: 'id,name,picture' }, function (userInfo) {
                const { id, name, picture } = userInfo;
                
                // Puedes cambiar 'large' por 'small', 'normal', 'square', o los valores específicos de ancho y alto
                const pictureUrl = `https://graph.facebook.com/${id}/picture?type=large`;

                welcomePanel.innerHTML = `
                    <h1>Hola, ${name}!</h1>
                    <img src="${pictureUrl}" alt="Profile Picture">
                `;
            });
        } else {
            // El usuario no ha iniciado sesión
            welcomePanel.innerHTML = `
                <h1>Hola, Usuario!</h1>
                <p>Usuario no ha iniciado sesión.</p>
            `;
        }
    });
}

updateWelcomePanel();

function getUserInfo() {
    FB.api('/me', 'GET', { fields: 'id,name,picture' }, function(userInfo) {
        // Procesar la información del usuario (nombre, foto, etc.)
        console.log('Información del usuario:', userInfo);
    });
}
