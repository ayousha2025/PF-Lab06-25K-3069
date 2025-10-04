#include<stdio.h>
#include<math.h>

int main(){
	float magnitude;
	int intensity , standard_ref_value;
	
	printf("Enter intensity of the earth quake: ");
	scanf("%d", &intensity);
	printf("Enter standard refernce value: ");
	scanf("%d", &standard_ref_value);
	
	if (standard_ref_value == 0) {
        printf("Error! Standard reference value cannot be zero.\n");
        return 1;
    }
	
	magnitude = log10((float)intensity/standard_ref_value);
	printf("The magnitude of earth quake is %.2f", magnitude);
}
