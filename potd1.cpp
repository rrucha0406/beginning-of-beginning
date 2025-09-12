using namespace std;

 int main(){
 int n;
 cin>>n;
int a[n], max_height=0, min_height=0;
for(int i=0;i<n;i++){
cin>>a[i];
if(a[i]>a[max_height]) max_height=i;
if(a[i]<=a[min_height]) min_height=i;
//computing max height of soldier's index
//computing min height of soldier's index
 }


int swaps=max_height+(n-1-min_height);
if(max_height>min_height)swaps--;

//if max is ahead of min, one less swap is required, as we have already taken the min one step to the right
cout<<swaps<<'\n';
 }
