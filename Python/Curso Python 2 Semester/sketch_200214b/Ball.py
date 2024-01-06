class Ball(object):
    def __init__(self, x, y, radious, colour):
        self.x = x
        self.y = y
        self.colour = colour
        self.radious = radious
        self.velocity = 5
        self.direccion = [1.0, 1.0]
        
    def update(self):
        self.checkWallsCollition
        noStroke
        fill(self.colour)
        circle(self.x, self.t, self radious)
        self.x += self.direccion[0] * self.velocity
        
    def checkWallsCollition(self):
        if self.x -self.radious< 0 or self.x + self.radious> width:
            self.direccion[0] *= -1
        if self.y -self.radious< 0 or self.t + self.redious > width:
            self.direccion[1] *= -1
