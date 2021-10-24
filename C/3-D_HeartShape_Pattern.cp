//generating 3-D heart shaped pattern

#include <stdio.h>
#include <math.h>
float f(float x, float y, float z) {
    float a;
    a = x*x + 9.0f / 4.0f*y*y + z*z - 1;
    return (a*a*a - x*x*z*z*z - 9.0f / 80.0f*y*y*z*z*z);
}
float h(float x, float z) {
    float y;
    for ( y = 1.0f; y >= 0.0f; y -= 0.001f)
        if (f(x,y,z) <= 0.0f)
            return y;
    return 0.0f;
}
int main(void) {
    float z,x,v,y0,ny,nx,nz,nd,d;
    for ( z = 1.5f; z > -1.5f; z -= 0.05f) {
        for ( x = -1.5f; x < 1.5f; x += 0.025f) {
             v = f(x,0.0f,z);
            if (v <= 0.0f) {
                 y0 = h(x,z);
                 ny = 0.01f;
                 nx = h(x + ny,z) - y0;
                 nz = h(x,z + ny) - y0;
                 nd = 1.0f / sqrtf(nx*nx + ny*ny + nz*nz);
                 d = (nx + ny - nz)*nd*0.5f + 0.5f;
                putchar(".:-=+*#%@"[(int)(d*5.0f)]);
            }
            else
                putchar(' ');
        }
        putchar('\n');
    }
}