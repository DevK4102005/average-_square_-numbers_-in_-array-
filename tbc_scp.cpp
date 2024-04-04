#include <stdio.h>
#include <math.h>
//prototypes for import, export array, and check square numbers
void Nhapmang(int a[],int &n);//import array function
void Xuatmang(int a[],int n);//export array function
float check(int check);//check square numbers function
float tbc_scp(int a[],int n);//average square numbers in array function
int main(){
  int n,a[100];
  printf("Nhap so phan tu cua mang:");
  scanf("%d",&n);
  Nhapmang(a,n);
  printf("Mang vua nhap la:\n");
  Xuatmang(a,n);
  printf("\n");
  printf("Cac so chinh phuong trong mang:\n");
  printf("Trung binh cac so chinh phuong trong mang:%.2f\n",tbc_scp(a,n));

}
void Nhapmang(int a[],int &n){
  for (int i=0;i<=n-1;i++){
    printf("Nhap phan tu a[%d]: ",i);
    scanf("%d",&a[i]);
  }
}
void Xuatmang(int a[],int n){
  for (int i = 0; i <= n-1; i++)
  {
    printf("%d\t",a[i]);
  }
}
float check(int check){
  // float temp=sqrt(check);//declare temporary variable, check if variable 'check' is equal to temp square return 1
  // if (check==pow(temp,2)) return 1;
  if (check==pow(sqrt(check),2)) return 1;
  return 0;
}
float tbc_scp(int a[],int n){
  int s=0;
  float dem=0;
  for (int i = 0; i <= n-1; i++)
  {
    if (check(a[i]))
    {
      s+=a[i];
      dem++;
      printf("%d\t",a[i]);
    }
  }
  printf("\n");
  return s/dem;
}