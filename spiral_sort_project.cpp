#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
		
	int m;
	cin>>m;
	
	int matris[m][m] = {0};
	
	int top = 0, bottom = m-1, right = m-1, left = 0;
	
	int num = 1;
	
	while(top <= bottom && left <= right){
		for(int i = left; i <= right; i++){
			matris[top][i] = num;
			num++; 
		}
		top++;
		for(int i = top; i <= bottom; i++){
			matris[i][right] = num;
			num++;
		}
		right--;
		
		if(top <= bottom){
			for(int i = right; i >= left; i--){
				matris[bottom][i] = num;
				num++;
			}
			bottom--;
		}
		
		if(left <= right){
			for(int i = bottom; i >= top; i--){
				matris[i][left] = num;
				num++;
			}
			left++;
		}
	}
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j++){
			cout<<matris[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
