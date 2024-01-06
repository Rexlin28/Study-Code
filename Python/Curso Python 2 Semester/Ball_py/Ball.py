class Ball(object):
    def __init__(self, x, y, radious, colour):
        self.x = x
        self.y = y
        self.colour = colour
        self.radious = radious
        self.velocity = 5
        self.direccion = [1.0,1.0]
        
    def update(self):
        self.checkWallsCollition()
        noStroke()
        fill(self.colour)
        circle(self.x, self.y, self.radious)
        self.x += self.direccion[0] * self.velocity
        self.y += self.direccion[1] * self.velocity
    def checkWallsCollition(self):
        if self.x - self.radious/2<0 or self.x + self.radious/2> width:
            self.direccion[0] *= -1
        if self.y - self.radious/2<0 or self.y + self.radious/2> height:
            self.direccion[1] *= -1
            
    def checkBallCollition(self, other):
        distance= (((self.x - other.x)**2) + ((self.y - other.y))**2)**0.5
        
        if distance<= self.radious/2:
            self.direccion[0] *= -1
            self.direccion[1] *= -1
            other.direccion[0] *= -1
            other.direccion[1] *= -1
