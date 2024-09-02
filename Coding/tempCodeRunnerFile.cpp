  find the minimum number
     int smallest=arr[0];
     for(int i=0;i<=number;i++){
        if(arr[i]<smallest)
        smallest=arr[i];
     }
     cout<<endl;
     cout<<"the min number of the array is="<<smallest<<endl;
     cout<<"the second smallest no is="<<arr[number+1];
