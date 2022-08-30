#include  <stdio.h>
#include  <math.h>

int main(){
	
	int Marks[3][5] = {{71, 75, 67, 73, 45}, {77, 65, 56, 78, 58}, {63, 57, 79, 88, 33}}; 
	int number_of_students = 5;
	
	int first_element = Marks[0][0];
	int last_element =  Marks[2][4];
	
	printf("The first element of the array is %d", first_element);
	printf("\nThe last element of the array is %d\n\n", last_element);
	
	float sum_of_marks_in_physics = 0;
	float sum_of_marks_in_maths = 0;
	float sum_of_marks_in_chemistry = 0;
	
	
	// calculate sum of marks in Physics
	for(int i=0; i<3; i++){
		for(int j=0; j<5; j++){
			if(i == 1){
				sum_of_marks_in_physics += Marks[i][j];
			}
		}
	}
	
	// calculate sum of marks in Maths
	int x = 0, y= 0;
	while(x < 3){
		while(y < 5){
			if(x == 0){
			   sum_of_marks_in_maths += Marks[x][y];
		    }
			 y++;
		}
		x++;
	}
	
	// calculate sum of marks in Chemistry
	int p = 0;
	do{
		int q= 0;
		do{
			if(p == 2){
               sum_of_marks_in_chemistry += Marks[p][q];
		    }
			q++;
			
		}while(q<5);
		p++;
		
	}while(p<3);
	
	
	printf("Sum of marks in Physics is %f\n", sum_of_marks_in_physics);
	printf("Sum of marks in Maths is %f\n", sum_of_marks_in_maths);
	printf("Sum of marks in Chemistry is %f\n\n", sum_of_marks_in_chemistry);
	
	float av_mark_in_physics = sum_of_marks_in_physics/number_of_students;
	float av_mark_in_maths = sum_of_marks_in_maths/number_of_students;
	float av_mark_in_chemistry = sum_of_marks_in_chemistry/number_of_students;
	
	
	printf("Average of marks in Physics is %.2f\n", av_mark_in_physics);
	printf("Average of marks in Maths is %.2f\n", av_mark_in_maths);
	printf("Average of marks in Chemistry is %.2f\n\n", av_mark_in_chemistry);
	
	
	// Get sum of marks in all the 3 subjects
	int sum_of_all_marks = 0;
	for(int i=0; i<3; i++){
		for(int j=0; j<5; j++){
				sum_of_all_marks += Marks[i][j];
		}
	}
	
	printf("Sum of marks in all subjects is %d\n", sum_of_all_marks);
	
	// Get average in 3 subjects
	float av_mark = sum_of_all_marks/number_of_students;
	printf("Average mark in all subjects is %.1f\n", av_mark);
	
	
	// Get sum of only even numbers
	int sum_of_all_evens = 0;
	for(int i=0; i<3; i++){
		for(int j=0; j<5; j++){
			    if(Marks[i][j] % 2 == 0){
					sum_of_all_evens += Marks[i][j];
				}
		}
	}
	
	printf("Sum of only even numbers from the array is %d\n", sum_of_all_evens);
	
	return 0;
	
	 
}
