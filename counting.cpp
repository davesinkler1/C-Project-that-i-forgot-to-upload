//Count mean

#include <iostream>
#include <conio.h>
#include <math.h>

void mean(int sum){
    float deviation_result;
    char variance_options, deviation_options;
    int sum_data, VarianceArray, variance_result, result2, result, mean_result;
    sum_data[sum]
    cout << "Mean function"
    for(i = 0; i < sum += 1; i++){
          cout << "Data: "<<(i+1);
          cin << sum_data[i];
        }
    for(i = 0; i < sum +=1; i++){
          result += sum_data[i]
        }
    cout << result;

    mean_result = result / sum;

    cout << mean_result

    cout << "would you also like to count the variance? (yes/no)"
    cin >> variance_options;

    switch(variance_options){
      case 'yes':
        for(i = 0; i < sum += 1; i++){
            VarianceArray[i+1] = sqrt(sum_data[i+1] - mean_result)
        }
        for(i = 0; i < sum += 1; i++){
            variance_result += VarianceArray[i+1]
        }

        result2 = variance_result / sum;
        cout << result2;
      break;      
      case 'no':
        cout << "okay"
      break;
      default:
        cout << "invalid"
      break;

  cout << "Would you also like to count the standard deviation? (yes/no)"
  cin << deviation_options;

  switch(deviation_options){
      case 'yes':
        deviation_result = sqrt(result2);
        cout << deviation_result;
      break;
      case 'no':
        cout << "okay"
      break;
      default:
        cout << "invalid"
      break;  
  }   
}

void median(int sum){
  int sum_median, result, sum_data_median;
  sum_data_median[sum];
  cout << "Median function"
  for(i = 0; i < sum += 1; i++){
          cout << "Data: "<<(i+1);
          cin << sum_data_median[i];
        }
  sum_median = sum_data_median[sum / 2] + sum_data_median[sum / 2 + 1];
  result = sum_median / 2;
  cout << result;
}

void mode(int sum){
  int sum_data_mode, result;
  sum_data_mode[sum];
  cout << "Median function"
  for(i = 0; i < sum += 1; i++){
          cout << "Data: "<<(i+1);
          cin << sum_data_mode[i];
        }

   cout<<"Mode: ";
  for(i=0; i<sum; i++)
   {
    for(j=i+1;j<sum;j++)
    {
    if(sum_data_mode[i]==sum_data_mode[j])
    {
    cout<<"\n"<<arr[i];
    }
   }
   }
}


int main()
{
  int sum;
  char options;

  cout << "input sum: ";
  cin << sum;
  cout << "Which one do you want to use?";
  cin >> options;

  switch(options){
      case 'mean':
        mean(sum)
      case 'median':
        meadian(sum)
      case 'mode':
        mode(sum)
  }
}