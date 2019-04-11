#include<iostream>

using namespace std;

int main()
{
    int a0[4][2]={{1,1},{1,-1},{-1,1},{-1,-1}};
    int a1[2][1]={{1},{-1}};

    int a2[4][2]={0};
    int n=4;
    for(int i=0,sum=0,t=0;i<4;i++){
        sum=a0[i][0]+a0[i][1];
        if(sum==0){
            n--;
        }
        else{
            a2[t][0]=a0[i][0];
            a2[t][1]=a0[i][1];
            t++;
        }
        sum=0;
    }
//***********************************
    int q2,q4=0;
    int b4[8][4]={0};
    for(int i=0;i<2;i++){
        int t=4*i;
        for(int k=0;k<2;k++){
            for(int s=0;s<4;s++){
                b4[t+s][k]=a2[i][k];

            }
        }
    }
    for(int i=0;i<4;i++){
        for(int k=0;k<2;k++){
            for(int s=0;s<2;s++){
                b4[i+4*s][2+k]=a0[i][k];
            }
        }
    }
    int a4[8][4]={0};
    n=8;
    for(int i=0,sum=0,t=0;i<8;i++){
        for(int k=0;k<4;k++){
            sum=b4[i][k]+sum;
        }
        if(sum==0){
            n--;
        }
        else{
            for(int k=0;k<4;k++){
                a4[t][k]=b4[i][k];
            }
            t++;
            if(sum==2||sum==-2){
                q2++;
            }
            else if(sum==4||sum==-4){
                q4++;
            }
        }
        sum=0;
    }

    cout<<n<<" "<<q2<<" "<<q4<<endl;
//********************************************************
    int q1,q3,q5=0;
    int b5[12][5]={0};
    for(int i=0;i<6;i++){
        int t=2*i;
        for(int k=0;k<4;k++){
            for(int s=0;s<2;s++){
                b5[t+s][k]=a4[i][k];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int k=0;k<1;k++){
            for(int s=0;s<6;s++){
                b5[i+2*s][4+k]=a1[i][k];
            }
        }
    }

    int a5[12][5]={0};
    n=12;

    for(int i=0,sum=0,t=0;i<12;i++){
        for(int k=0;k<5;k++){
            sum=b5[i][k]+sum;
        }
        if(sum==0){
            n--;
        }
        else{
            for(int k=0;k<5;k++){
                a5[t][k]=b5[i][k];
            }
            t++;
            if(sum==1||sum==-1){
                q1++;
            }
            else if(sum==3||sum==-3){
                q3++;
            }
            else if(sum==5||sum==-5){
                q5++;
            }
        }
        sum=0;
    }
    cout<<n<<" "<<q1<<" "<<q3<<" "<<q5<<endl;
    //********************************************************
    int q6=0;
    q2=0;q4=0;
    int b6[24][6]={0};
    for(int i=0;i<6;i++){
        int t=4*i;
        for(int k=0;k<4;k++){
            for(int s=0;s<4;s++){
                b6[t+s][k]=a4[i][k];
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int k=0;k<2;k++){
            for(int s=0;s<6;s++){
                b6[i+4*s][4+k]=a0[i][k];
            }
        }
    }
    int a6[24][6]={0};
    n=24;
    for(int i=0,sum=0,t=0;i<24;i++){
        for(int k=0;k<6;k++){
            sum=b6[i][k]+sum;
        }

        if(sum==0){
            n--;
        }
        else{
            for(int k=0;k<6;k++){
                a6[t][k]=b6[i][k];
            }
            t++;
            if(sum==2||sum==-2){
                q2++;
            }
            else if(sum==4||sum==-4){
                q4++;
            }
            else if(sum==6||sum==-6){
                q6++;
            }
        }
        sum=0;
    }
    cout<<n<<" "<<q2<<" "<<q4<<" "<<q6<<endl;

//************************************************
    int q7=0;
    q1=0;q3=0;q5=0;
    int b7[40][7]={0};
    for(int i=0;i<20;i++){
        int t=2*i;
        for(int k=0;k<6;k++){
            for(int s=0;s<2;s++){
                b7[t+s][k]=a6[i][k];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int k=0;k<1;k++){
            for(int s=0;s<20;s++){
                b7[i+2*s][6+k]=a1[i][k];
            }
        }
    }

    int a7[40][7]={0};
    n=40;

    for(int i=0,sum=0,t=0;i<40;i++){
        for(int k=0;k<7;k++){
            sum=b7[i][k]+sum;
        }
        if(sum==0){
            n--;
        }
        else{
            for(int k=0;k<7;k++){
                a7[t][k]=b7[i][k];
            }
            t++;
            if(sum==1||sum==-1){
                q1++;
            }
            else if(sum==3||sum==-3){
                q3++;
            }
            else if(sum==5||sum==-5){
                q5++;
            }
            else if(sum==7||sum==-7){
                q7++;
            }
        }
        sum=0;
    }
    cout<<n<<" "<<q1<<" "<<q3<<" "<<q5<<" "<<q7<<endl;
//******************************************************
    int q8=0;
    q2=0;q4=0;q6=0;
    int b8[80][8]={0};
    for(int i=0;i<20;i++){
        int t=4*i;
        for(int k=0;k<6;k++){
            for(int s=0;s<4;s++){
                b8[t+s][k]=a6[i][k];
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int k=0;k<2;k++){
            for(int s=0;s<20;s++){
                b8[i+4*s][6+k]=a0[i][k];
            }
        }
    }
    int a8[80][8]={0};
    n=80;

    for(int i=0,sum=0,t=0;i<80;i++){
        for(int k=0;k<8;k++){
            sum=b8[i][k]+sum;
        }
        if(sum==0){
            n--;
        }
        else{
            for(int k=0;k<8;k++){
                a8[t][k]=b8[i][k];
            }
            t++;
            if(sum==2||sum==-2){
                q2++;
            }
            else if(sum==4||sum==-4){
                q4++;
            }
            else if(sum==6||sum==-6){
                q6++;
            }
            else if(sum==8||sum==-8){
                q8++;
            }
        }
        sum=0;
    }
    cout<<n<<" "<<q2<<" "<<q4<<" "<<q6<<" "<<q8<<endl;

    //**********************************************************
    int q9=0;
    q1=0;q3=0;q5=0;q7=0;
    int b9[140][9]={0};
    for(int i=0;i<70;i++){
        int t=2*i;
        for(int k=0;k<8;k++){
            for(int s=0;s<2;s++){
                b9[t+s][k]=a8[i][k];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int k=0;k<1;k++){
            for(int s=0;s<70;s++){
                b9[i+2*s][8+k]=a1[i][k];
            }
        }
    }

    int a9[140][9]={0};
    n=140;

    for(int i=0,sum=0,t=0;i<140;i++){
        for(int k=0;k<9;k++){
            sum=b9[i][k]+sum;
        }
        if(sum==0){
            n--;
        }
        else{
            for(int k=0;k<9;k++){
                a9[t][k]=b9[i][k];
            }
            t++;
            if(sum==1||sum==-1){
                q1++;
            }
            else if(sum==3||sum==-3){
                q3++;
            }
            else if(sum==5||sum==-5){
                q5++;
            }
            else if(sum==7||sum==-7){
                q7++;
            }
            else if(sum==9||sum==-9){
                q9++;
            }
        }
        sum=0;
    }
    cout<<n<<" "<<q1<<" "<<q3<<" "<<q5<<" "<<q7<<" "<<q9<<endl;
//    //*************************************************************

    int q10=0;
    q2=0;q4=0;q6=0;q8=0;
    int b10[280][10]={0};
    for(int i=0;i<70;i++){
        int t=4*i;
        for(int k=0;k<8;k++){
            for(int s=0;s<4;s++){
                b10[t+s][k]=a8[i][k];
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int k=0;k<2;k++){
            for(int s=0;s<70;s++){
                b10[i+4*s][8+k]=a0[i][k];
            }
        }
    }
    int a10[280][10]={0};
    n=280;

    for(int i=0,sum=0,t=0;i<280;i++){
        for(int k=0;k<10;k++){
            sum=b10[i][k]+sum;
        }
        if(sum==0){
            n--;
        }
        else{
            for(int k=0;k<10;k++){
                a10[t][k]=b10[i][k];
            }
            t++;
            if(sum==2||sum==-2){
                q2++;
            }
            else if(sum==4||sum==-4){
                q4++;
            }
            else if(sum==6||sum==-6){
                q6++;
            }
            else if(sum==8||sum==-8){
                q8++;
            }
            else if(sum==10||sum==-10){
                q10++;
            }
        }
        sum=0;
    }
    cout<<n<<" "<<q2<<" "<<q4<<" "<<q6<<" "<<q8<<" "<<q10<<endl;
   //**********************************************************
    int q11=0;
    q1=0;q3=0;q5=0;q7=0;q9=0;
    int b11[504][11]={0};
    for(int i=0;i<252;i++){
        int t=2*i;
        for(int k=0;k<10;k++){
            for(int s=0;s<2;s++){
                b11[t+s][k]=a10[i][k];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int k=0;k<1;k++){
            for(int s=0;s<252;s++){
                b11[i+2*s][10+k]=a1[i][k];
            }
        }
    }

    int a11[504][11]={0};
    n=504;

    for(int i=0,sum=0,t=0;i<504;i++){
        for(int k=0;k<11;k++){
            sum=b11[i][k]+sum;
        }
        if(sum==0){
            n--;
        }
        else{
            for(int k=0;k<11;k++){
                a11[t][k]=b11[i][k];
            }
            t++;
            if(sum==1||sum==-1){
                q1++;
            }
            else if(sum==3||sum==-3){
                q3++;
            }
            else if(sum==5||sum==-5){
                q5++;
            }
            else if(sum==7||sum==-7){
                q7++;
            }
            else if(sum==9||sum==-9){
                q9++;
            }
            else if(sum==11||sum==-11){
                q11++;
            }
        }
        sum=0;
    }
    cout<<n<<" "<<q1<<" "<<q3<<" "<<q5<<" "<<q7<<" "<<q9<<" "<<q11<<endl;
////***********************************************************************
    int q12=0;
    q2=0;q4=0;q6=0;q8=0;q10=0;
    int b12[1008][12]={0};
    for(int i=0;i<252;i++){
        int t=4*i;
        for(int k=0;k<10;k++){
            for(int s=0;s<4;s++){
                b12[t+s][k]=a10[i][k];
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int k=0;k<2;k++){
            for(int s=0;s<252;s++){
                b12[i+4*s][10+k]=a0[i][k];
            }
        }
    }

    int a12[1008][12]={0};
    n=1008;

    for(int i=0,sum=0,t=0;i<1008;i++){
        for(int k=0;k<12;k++){
            sum=b12[i][k]+sum;
        }
        if(sum==0){
            n--;
        }
        else{
            for(int k=0;k<12;k++){
                a12[t][k]=b12[i][k];
            }
            t++;
            if(sum==2||sum==-2){
                q2++;
            }
            else if(sum==4||sum==-4){
                q4++;
            }
            else if(sum==6||sum==-6){
                q6++;
            }
            else if(sum==8||sum==-8){
                q8++;
            }
            else if(sum==10||sum==-10){
                q10++;
            }
            else if(sum==12||sum==-12){
                q12++;
            }
        }
        sum=0;
    }
    cout<<n<<" "<<q2<<" "<<q4<<" "<<q6<<" "<<q8<<" "<<q10<<" "<<q12<<endl;
////**************************************************************
int q13=0;
    q1=0;q3=0;q5=0;q7=0;q9=0;q11=0;
    int b13[1848][13]={0};
    for(int i=0;i<924;i++){
        int t=2*i;
        for(int k=0;k<12;k++){
            for(int s=0;s<2;s++){
                b13[t+s][k]=a12[i][k];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int k=0;k<1;k++){
            for(int s=0;s<924;s++){
                b13[i+2*s][12+k]=a1[i][k];
            }
        }
    }

    int a13[1848][13]={0};
    n=1848;

    for(int i=0,sum=0,t=0;i<1848;i++){
        for(int k=0;k<13;k++){
            sum=b13[i][k]+sum;
        }
        if(sum==0){
            n--;
        }
        else{
            for(int k=0;k<13;k++){
                a13[t][k]=b13[i][k];
            }
            t++;
            if(sum==1||sum==-1){
                q1++;
            }
            else if(sum==3||sum==-3){
                q3++;
            }
            else if(sum==5||sum==-5){
                q5++;
            }
            else if(sum==7||sum==-7){
                q7++;
            }
            else if(sum==9||sum==-9){
                q9++;
            }
            else if(sum==11||sum==-11){
                q11++;
            }
            else if(sum==13||sum==-13){
                q13++;
            }
        }
        sum=0;
    }
    cout<<n<<" "<<q1<<" "<<q3<<" "<<q5<<" "<<q7<<" "<<q9<<" "<<q11<<" "<<q13<<endl;
   //*********************************************************************************
    int q14=0;
    q2=0;q4=0;q6=0;q8=0;q10=0;q12=0;
    int b14[3696][14]={0};
    for(int i=0;i<924;i++){
        int t=4*i;
        for(int k=0;k<12;k++){
            for(int s=0;s<4;s++){
                b14[t+s][k]=a12[i][k];
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int k=0;k<2;k++){
            for(int s=0;s<924;s++){
                b14[i+4*s][12+k]=a0[i][k];
            }
        }
    }

    int a14[3696][14]={0};
    n=3696;

    for(int i=0,sum=0,t=0;i<3696;i++){
        for(int k=0;k<14;k++){
            sum=b14[i][k]+sum;
        }
        if(sum==0){
            n--;
        }
        else{
            for(int k=0;k<14;k++){
                a14[t][k]=b14[i][k];
            }
            t++;
            if(sum==2||sum==-2){
                q2++;
            }
            else if(sum==4||sum==-4){
                q4++;
            }
            else if(sum==6||sum==-6){
                q6++;
            }
            else if(sum==8||sum==-8){
                q8++;
            }
            else if(sum==10||sum==-10){
                q10++;
            }
            else if(sum==12||sum==-12){
                q12++;
            }
            else if(sum==14||sum==-14){
                q14++;
            }
        }
        sum=0;
    }

    cout<<n<<" "<<q2<<" "<<q4<<" "<<q6<<" "<<q8<<" "<<q10<<" "<<q12<<" "<<q14<<endl;

    //****************************************************************************

    int q15=0;
    q1=0;q3=0;q5=0;q7=0;q9=0;q11=0;q13=0;
    int b15[6864][15]={0};
    for(int i=0;i<3432;i++){
        int t=2*i;
        for(int k=0;k<14;k++){
            for(int s=0;s<2;s++){
                b15[t+s][k]=a14[i][k];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int k=0;k<1;k++){
            for(int s=0;s<3432;s++){
                b15[i+2*s][14+k]=a1[i][k];
            }
        }
    }

    int a15[6864][15]={0};
    n=6864;

    for(int i=0,sum=0,t=0;i<6864;i++){
        for(int k=0;k<15;k++){
            sum=b15[i][k]+sum;
        }
        if(sum==0){
            n--;
        }
        else{
            for(int k=0;k<15;k++){
                a15[t][k]=b15[i][k];
            }
            t++;
            if(sum==1||sum==-1){
                q1++;
            }
            else if(sum==3||sum==-3){
                q3++;
            }
            else if(sum==5||sum==-5){
                q5++;
            }
            else if(sum==7||sum==-7){
                q7++;
            }
            else if(sum==9||sum==-9){
                q9++;
            }
            else if(sum==11||sum==-11){
                q11++;
            }
            else if(sum==13||sum==-13){
                q13++;
            }
            else if(sum==15||sum==-15){
                q15++;
            }
        }
        sum=0;
    }
    cout<<n<<" "<<q1<<" "<<q3<<" "<<q5<<" "<<q7<<" "<<q9<<" "<<q11<<" "<<q13<<" "<<q15<<endl;
    //********************************************************************************

    int q16=0;
    q2=0;q4=0;q6=0;q8=0;q10=0;q12=0;q14=0;
    int b16[13728][16]={0};

    for(int i=0;i<3432;i++){
        int t=4*i;
        for(int k=0;k<14;k++){
            for(int s=0;s<4;s++){
                b16[t+s][k]=a14[i][k];
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int k=0;k<2;k++){
            for(int s=0;s<3432;s++){
                b16[i+4*s][14+k]=a0[i][k];
            }
        }
    }

    int a16[13728][16]={0};
    n=13728;

    for(int i=0,sum=0,t=0;i<13728;i++){
        for(int k=0;k<16;k++){
            sum=b16[i][k]+sum;
        }
        if(sum==0){
            n--;
        }
        else{
            for(int k=0;k<16;k++){
                a16[t][k]=b16[i][k];
            }
            t++;
            if(sum==2||sum==-2){
                q2++;
            }
            else if(sum==4||sum==-4){
                q4++;
            }
            else if(sum==6||sum==-6){
                q6++;
            }
            else if(sum==8||sum==-8){
                q8++;
            }
            else if(sum==10||sum==-10){
                q10++;
            }
            else if(sum==12||sum==-12){
                q12++;
            }
            else if(sum==14||sum==-14){
                q14++;
            }
            else if(sum==16||sum==-16){
                q16++;
            }
        }
        sum=0;
    }

    cout<<n<<" "<<q2<<" "<<q4<<" "<<q6<<" "<<q8<<" "<<q10<<" "<<q12<<" "<<q14<<" "<<q16<<endl;

}

