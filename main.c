#include <stdio.h>

int i;

int main(){
    unsigned long long int sequence[2] = {0,1};
    unsigned long long int sequenceSize = 90, sequenceCurNumber, tempVar;

    printf("%d\n%d\n", sequence[0], sequence[1]);
    for(i = 0; i < sequenceSize; i++){
        sequenceCurNumber = sequence[0] + sequence[1];
        tempVar = sequence[1];
        sequence[0] = tempVar;
        sequence[1] = sequenceCurNumber;
        printf("%lld\n", sequence[1]);
    }
    return 0;
}