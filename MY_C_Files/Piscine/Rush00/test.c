# include <stdio.h>
# include <unistd.h>

void rush(int n1, int n2);

void rush(int n1, int n2){
    if(n1<=0 || n2<=0)
        return;

    //1��
    write(1, "o", 1);
    if(n1==1)
        write(1, "\n", 1);
    int x=1,y=1,z=1;
    if(x<n1){
        while(x<n1-1){
            write(1, "-", 1);
            x++;        }    }
    if(n1!=1)
        write(1, "o\n", 2);

    //�����
    while(z<=(n2-2)){
        if(n2!=1&&n1!=1){
            write(1, "|", 1);    }
        if(y<n2){
            while(y<n1-1){
                write(1, " ", 1);
                y++;        }
            write(1, "|\n", 2);
            y=1;
        }
        z++;    }

    //�������� n1==1�� ���� ���� 'o'�ϳ��� �۵�
    if(n2>=2&&n1==1)
        write(1, "o", 1);
    //�������� n1!=1�� ��
    if(n1!=1&&n2!=1){
        write(1, "o", 1);
        while(y<n1-1){
            write(1, "-", 1);
            y++;
        }
        write(1, "o", 1);
    }

}

int     main(){
    rush(2,1);
    return (0);
}
