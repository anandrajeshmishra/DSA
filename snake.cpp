#include <iostream>
using namespace std;
bool gameover;
const int width = 20;
const int height = 20;
int x,y,fruitx,fruity,score;
enum direction {stop = 0, left, right, up, down};
direction dir;
void setup(){
    gameover = false;
    dir = stop;
    x = width/2;
    y = height /2;
    fruitx = rand()%width;
    fruity = rand()%height;
    score = 0;
}
void draw(){
system("cls");
for (int i = 0; i < width; i++)
{
    cout<<"#";
    cout<<endl;
    for (int i = 0; i < height; i++)
    {
        {
            for (int j = 0; j < width; j++)
            {
                if(j==0)
                cout<<"#";
            }
            
        }
    }
    
    for (int i = 0; i < width; i++)
{
    cout<<"#";
}
}

}
void input(){

}
void logic(){

}
int main(){
    while (!gameover)
    {
        draw();
        input();
        logic();
    }
    
return 0;
}