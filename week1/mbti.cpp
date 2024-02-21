#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Data {
    public:
        int number;
        string name;
        float ne,ni,te,ti,se,si,fe,fi;
        string type;
};

class mbti{
    public:
        Data data[50];
        float a[50];
        mbti(){
            data[0] = {1,"kuuga",35.4,31,33,30,38,31,34,31,"ENTP"};
            data[1] = {2,"Agito",26,31,33,30,26,33,30,24,"INTJ"};
            data[2] = {3,"Ryuki",24.4,30.2,31,34,28,36,22,17,"ISTJ"};
            data[3] = {4,"n1",22.2,25.8,36,37,29,36,34,22,"ENTJ"};
            data[4] = {5,"n2",43.2,34,36,36,39,38,40,35,"INTP"};
            data[5] = {6,"n3",32.4,27,35,34,27,23,31,19,"ENFP"};
            data[6] = {7,"n4",28.4,25.6,33,35,32,30,24,26,"ESTP"};
            data[7] = {8,"n5",30.2,31.4,35,33,36,33,36,34,"ENTJ"};
            data[8] = {9,"n6",19.4,12,25,28,25,23,23,22,"ESTJ"};
            data[9] = {10,"n7",33.4,38.6,29,29,26,37,24,25,"INTJ"};
            data[10]= {11,"n8",30,29.6,34,32,38,28,33,22,"ENTP"};
            data[11]= {12,"n9",29,22.8,40,28,27,31,29,19,"ENTJ"};
            data[12]= {13,"n10",25.5,33,28,34,37,27,28,24,"INFJ"};
            data[13]= {14,"n11",29.8,26.4,28,36,29,30,33,28,"INTJ"};
            data[14]= {15,"n12",18.4,15,30,33,33,31,26,23,"ESTJ"};
        }
    void ed(string name_new, float ne_new ,float ni_new ,float te_new,float ti_new ,float se_new ,float si_new ,float fe_new ,float fi_new){
        int i ; 
        float p1,p2,p3,p4,p5,p6,p7,p8,dpq;
        for (i=0;i<15;i++){
            p1 = (data[i].ne - ne_new);
            p1 = p1*p1;
            p2 = (data[i].ni - ni_new);
            p2 = p2*p2;
            p3 = (data[i].te - te_new);
            p3 = p3*p3;
            p4 = (data[i].ti - ti_new);
            p4 = p4*p4;
            p5 = (data[i].se - se_new);
            p5 = p5*p5;
            p6 = (data[i].si - si_new);
            p6 = p6*p6;
            p7 = (data[i].fe - fe_new);
            p7 = p7*p7;
            p8 = (data[i].fi - fi_new);
            p8 = p8*p8;
            dpq = p1+p2+p3+p4+p5+p6+p7+p8;
            a[i] = pow(dpq,0.5);
        }
    }
    void mark3(){
        int i ,j,point[3];
        float min=99;
        for (j=0;j<15;j++){
            if (a[j] < min){
                min = a[j];
                point[0]=j;
            }
        }
        min=99;
        a[point[0]] = 100;
        for (j=0;j<15;j++){
            if (a[j] < min){
                min = a[j];
                point[1]=j;
            }
        }
        min=99;
        a[point[1]] = 100;
        for (j=0;j<15;j++){
            if (a[j] < min){
                min = a[j];
                point[2]=j;
            }
        }
        a[point[2]] = 100;
        // for (i=0;i<3 ; i++){
        //     cout << point[i] << endl;
        // }
    }
    void mark5(){
        int i ,j,point[3];
        float min=99;
        for (j=0;j<15;j++){
            if (a[j] < min){
                min = a[j];
                point[0]=j;
            }
        }
        min=99;
        a[point[0]] = 100;
        for (j=0;j<15;j++){
            if (a[j] < min){
                min = a[j];
                point[1]=j;
            }
        }
        min=99;
        a[point[1]] = 100;
        for (j=0;j<15;j++){
            if (a[j] < min){
                min = a[j];
                point[2]=j;
            }
        }
        min=99;
        a[point[2]] = 100;
        for (j=0;j<15;j++){
            if (a[j] < min){
                min = a[j];
                point[3]=j;
            }
        }
        min=99;
        a[point[3]] = 100;
        for (j=0;j<15;j++){
            if (a[j] < min){
                min = a[j];
                point[4]=j;
            }
        }
        a[point[4]] = 100;
        // for (i=0;i<5 ; i++){
        //     cout << point[i] << endl;
        // }

    }

    void typembti3(){
        int i,j;
        for (i=0;i<3;i++){
            for (j=0;j<4;j++){
                
            }
        }
    }
    void typembti5(){

    }
};


int main() {
    mbti mbti;
    string name_new,type_new ;
    float ne_new,ni_new,te_new,ti_new,se_new,si_new,fe_new,fi_new;
    int mark;
    // cout << "Name : ";
    // cin >> name_new;
    // cout << "Ne : ";
    // cin >> ne_new;
    // cout << "Ni : ";
    // cin >> ni_new;
    // cout << "Te : ";
    // cin >> te_new;
    // cout << "Ti : ";
    // cin >> ti_new;
    // cout << "Se : ";
    // cin >> se_new;
    // cout << "Si : ";
    // cin >> si_new;
    // cout << "Fe : ";
    // cin >> fe_new;
    // cout << "Fi : ";
    // cin >> fi_new;

    // mbti.ed(name_new,ne_new,ni_new,te_new,ti_new,se_new,si_new,fe_new,fi_new);
    mbti.ed("Puiza",32,32,27,36,29,31,28,23);

    cout << "Mark size (3 or 5): ";
    cin >> mark ;
    if (mark == 3){
        mbti.mark3();
        mbti.typembti3();
    }
    else if (mark == 5){
        mbti.mark5();
        mbti.typembti5(mark);
    }


    return 0;
}