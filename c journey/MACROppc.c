#define PRODUCT(a,b) a*b

int main()
{
printf("Product is %d ",PRODUCT(3+5,4-3));

}

#undef PRODUCT
// It is used to forgot the preprocessor command after this 