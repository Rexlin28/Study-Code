from Ball import Ball


b= Ball(10,10,20, '#000000')
balls= []
ballsSize=20
initBalls = 5
def setup():
    size(500,500)
    for i in range(initBalls):
        b = Ball(50,50, ballsSize, '#000000')
        b.velocity = random(1,5)
        b.direccion = [random(-1,1), random(-1,1)]
        balls.append(b)
def draw():
  ###  b=Ball.ball(10, 10, 20, '#000000')
  background('#eeeeee')
  
  for j in range(len(balls)):
      balls[j].update()
      
      for k in range(len(balls)):
          if k != j:
              balls[j].checkBallCollition(balls[k])
