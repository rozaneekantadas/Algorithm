#include<stdio.h>
int main()
{
    int w=16, i;
    int weight[6] = {6,10,3,5,1,3};
    int value[6] = {6,2,1,8,3,5};
    char item[10] = {'1', '2', '3', '4', '5', '6',};
    float density[6];

    //Calculate Density
    for(i=0; i<6; i++){
        density[i] = (float)value[i]/weight[i];
    }

    //Sort Descending order
    while(1){
        int count=0, temp1, temp2;
        float temp;
        char temp3;
        for(i=0; i<5; i++){
            if(density[i+1] > density[i]){
                temp = density[i+1];
                density[i+1] = density[i];
                density[i] = temp;

                temp1 = weight[i+1];
                weight[i+1] = weight[i];
                weight[i] = temp1;

                temp2 = value[i+1];
                value[i+1] = value[i];
                value[i] = temp2;

                temp3 = item[i+1];
                item[i+1] = item[i];
                item[i] = temp3;
                count++;
            }
        }
        if(count==0) break;
    }

    int tw=0, due;
    float val;
    float benefit=0.0;

    for(i=0; i<6; i++){
        if(tw+weight[i] <= w){
            tw += weight[i];
            benefit += value[i];
            printf("Item: %c   Weight: %d   Value: %d   Total Weight: %d   Benefit: %.3f\n", item[i], weight[i], value[i], tw, benefit);
        }
        else{
            due = w-tw;
            tw += due;
            val = due*density[i];
            benefit += val;
            printf("Item: %c   Weight: %d   Value: %.3f  Total Weight: %d   Benefit: %.3f\n", item[i], due, val, tw, benefit);
            break;
        }
    }
}
