void nhap_MT(float *A[],int n, int m)
{
    int i,j;
        printf("        --------------------------------------------------------\n");
        printf("                  Moi ban nhap gia tri cho ma tran!\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
           { printf("Nhap gia tri A[%d][%d]: ",i,j);
            scanf("%f",&A[i][j]);
           }
}
void xuat_MT(float *A[], int n, int m)
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%6.2f",A[i][j]);
        printf("\n");
    }
}
void chuyenvi_MT(float *A[],int n,int m)
{
    int i,j;
        printf("        --------------------------------------------------------\n");
        printf("                              MA TRAN CHUYEN VI \n");
    for(j=0;j<m;j++)
    {
        for (i=0;i<n;i++)
            printf("%6.2f",A[i][j]);
            printf("\n");
    }
}
void xoahang_MT(float *A[],int n, int m)
{
    int k,i,j;
        printf("        --------------------------------------------------------\n");
    do
    {
    printf("                        Ban hay nhap so hang can xoa(0<k<=%d): ",n);
    scanf("%d",&k);
    }
    while((k<=0)||(k>n));
    float B[n][m];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        B[i][j]=A[i][j];
    for(i=k-1;i<n-1;i++)
        for(j=0;j<m;j++)
            B[i][j]=B[i+1][j];
        printf("        --------------------------------------------------------\n");
        printf("\t                  MA TRAN MOI SAU KHI XOA HANG %d\n",k);
        for(i=0;i<n-1;i++)
    {
        for(j=0;j<m;j++)
            printf("%6.2f",B[i][j]);
        printf("\n");
    }

}
void xoacot_MT(float *A[],int n,int m)
{
    int k,i,j;
        printf("        --------------------------------------------------------\n");
        do
        {
        printf("                        Ban hay nhap so cot can xoa(0<k<=%d): ",m);
    scanf("%d",&k);
        }
        while ((k<=0)||(k>m));
        float B[n][m];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        B[i][j]=A[i][j];
    for(i=0;i<n;i++)
        for (j=k-1;j<m-1;j++)
            B[i][j]=B[i][j+1];
        printf("        --------------------------------------------------------\n");
        printf("                        MA TRAN MOI SAU KHI XOA COT %d\n",k);
        for(i=0;i<n;i++)
    {
        for(j=0;j<m-1;j++)
            printf("%6.2f",B[i][j]);
        printf("\n");
    }
}
void cong_MT(float *A[],int n,int m)
{
    int k,i,j;
        printf("        --------------------------------------------------------\n");
        printf("                    Ban muon cong ma tran A voi A?  --> Hay bam phim 1\n");
        printf("    Neu ban muon cong ma tran A voi ma tran khac!   --> Hay bam phim 2\n");
        scanf("%d",&k);
    while ( (k!=2) && (k!=1))
    {
        printf("Ban nhap khong hop le! Hay nhap lai thao tac: ");
        scanf("%d",&k);
    }
    if (k==1)
    {
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                A[i][j]+=A[i][j];
        printf("        --------------------------------------------------------\n");
        printf("                      MA TRAN TONG CUA 2 MA TRAN A VA A\n");
    xuat_MT(A,n,m);
    }
    if (k==2)
    {
        float B[n][m];
        printf("        --------------------------------------------------------\n");
        printf("                Ban hay nhap ma tran B ma ban muon cong:\n");
        for(i=0;i<n;i++)
        for(j=0;j<m;j++)
           { printf("Nhap gia tri B[%d][%d]: ",i,j);
            scanf("%f",&B[i][j]);
           }
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                A[i][j]+=B[i][j];
        printf("        --------------------------------------------------------\n");
        printf("                     MA TRAN TONG CUA 2 MA TRAN A VA B\n");
    xuat_MT(A,n,m);

    }
}
void hieu_MT(float *A[],int n,int m)
{
   int k,i,j;
        printf("        --------------------------------------------------------\n");
        printf("                     Ban muon tru ma tran A voi A?  --> Hay bam phim 1\n");
        printf("     Neu ban muon tru ma tran A voi ma tran khac!   --> Hay bam phim 2\n");
        scanf("%d",&k);
    while ( (k!=2) && (k!=1))
    {
        printf("Ban nhap khong hop le! Hay nhap lai thao tac: ");
        scanf("%d",&k);
    }
    if (k==1)
    {
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                A[i][j]-=A[i][j];
        printf("        --------------------------------------------------------\n");
    printf("                      MA TRAN HIEU CUA 2 MA TRAN A VA A\n");
    xuat_MT(A,n,m);
    }
    if (k==2)
    {
        float B[n][m];
        printf("        --------------------------------------------------------\n");
        printf("                Ban hay nhap ma tran B ma ban muon tru:\n");
        for(i=0;i<n;i++)
        for(j=0;j<m;j++)
           { printf("Nhap gia tri B[%d][%d]: ",i,j);
            scanf("%f",&B[i][j]);
           }
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                A[i][j]-=B[i][j];
        printf("        --------------------------------------------------------\n");
        printf("                   MA TRAN HIEU CUA 2 MA TRAN A VA B\n");
    xuat_MT(A,n,m);
    }
}
void nhanmotso_MT(float *A[],int n,int m)
{
    int k,i,j;
        printf("        --------------------------------------------------------\n");
        printf("                    Ban hay nhap so can nhan voi ma tran: ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            A[i][j]*=k;
        printf("        --------------------------------------------------------\n");
        printf("\t                   MA TRAN TICH CUA %d VOI MA TRAN A\n",k);
    xuat_MT(A,n,m);
}
void nhanhai_MT(float *A[],int n, int m)
{
        int p,r,i,j;
        printf("        --------------------------------------------------------\n");
        do
        {
            printf("Hay nhap so cot ma tran B: ");
            scanf("%d",&p);
        }
        while( (p<=0)|| (p>=10));
        float B[m][p], C[n][p];
        printf("        --------------------------------------------------------\n");
        printf("                Ban hay nhap ma tran B ma ban muon nhan:\n");
        for(i=0;i<m;i++)
        for(j=0;j<p;j++)
           { printf("Nhap gia tri B[%d][%d]: ",i,j);
            scanf("%f",&B[i][j]);
           }
         for(i=0;i<n;i++)
            for (j=0;j<p;j++)
         {
               C[i][j]=0;
                for(r=0;r<m;r++)
                    C[i][j]+=A[i][r]*B[r][j];
         }
        printf("        --------------------------------------------------------\n");
        printf("\t                 MA TRAN TICH CUA MA TRAN A VOI MA TRAN B\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
            printf("%8.3f",C[i][j]);
        printf("\n");
    }

}
void thugon(float *B[], int n, int tru, int cot) {
   int i, j;
   float heso;
   int m=2*n;
   heso = B[tru][cot];

   for (i = 0; i < m; i++)
    {
      B[tru][i] /= heso;
    }

   for (i = 0; i < n; i++) {
      if (i != tru) {
         heso = B[i][cot];
         for (j = 0; j < m; j++) {
            B[i][j] = B[i][j] - B[tru][j] * heso;
         }
      }
   }
}
void nghichdao_MT(float *A[],int n,int m)
{
    if (n!=m) printf("MA TRAN KHONG HOP LE DE TIM MA TRAN NGHICH DAO\n");
    else
    {
    float *B[n];
    int i, j;
    int m=2*n;
    for(i=0;i<n;i++)
        B[i]=(float*)malloc(m*sizeof(float));


   for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
         if (j == i + n) {
            B[i][j] = 1;
         } else {
            B[i][j] = 0;
         }
      }
   }

   for (i = 0; i < n; i++)
      for (j = 0; j < n; j++)
        B[i][j]=A[i][j];

   for (i = 0; i < n; i++) {
      thugon(B, n, i, i);
   }
        printf("        --------------------------------------------------------\n");
        printf("\n                 MA TRAN NGICH DAO CUA MA TRAN DA CHO LA:\n");
   for (i = 0; i < n; i++)
    {
      printf("\n");
      for (j = 0; j < n; j++)
      {
         printf("%8.3f", B[i][j + n]);
      }
   }
   for(i=0;i<n;i++)
    free(B[i]);
   free(B);
    }
}
void dinhthuc_MT(float *A[],int n,int m)
{
    if (n!=m) printf("      MA TRAN KHONG VUONG\n");
    else
    {
    int i,j,k, sign = 1;
    float det = 1.0; float temp;
    for (i = 0; i < n-1; i++)
        {
            if (A[i][i] == 0)
                {
                    k = i+1;
                    while (k < n && A[k][i] == 0) k++;
                    if (k==n)
                        {
                            printf("\ndet(a) = 0");
                            break;
                        }
                    for (j = i; j < n; j++)
                        {
                            temp = A[i][j];
                            A[i][j] = A[k][j];
                            A[k][j] = temp;
                        }
                    sign = -sign;
                }
            for (j = i+1; j < n; j++)
                {
                    temp = -A[j][i]/A[i][i];
                    for (k = i+1; k < n; k++)
                        A[j][k] += temp*A[i][k];
                }
            det *= A[i][i];
        }

    det *= A[n-1][n-1];
        printf("        --------------------------------------------------------\n");
        printf("\n                 DINH THUC CUA MA TRAN DA CHO LA: %6.3f\n",det);
    }
}
void hang_MT(float *A[],int n,int m)
{
     float *B[n];
    int i, j,k,u;
    for(i=0;i<n;i++)
        B[i]=(float*)malloc(m*sizeof(float));
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            B[i][j]=A[i][j];
    for(i=0;i<n-1;i++)
     {
    		for(j=i;j<m;j++)
            {
    			if(B[i][j]==0)
    				for(k=i+1;k<n;k++)
    					if(B[k][j]!=0)
    						for(u=0;u<m;u++)
    						{
    							float t=B[i][u];
    							B[i][u]=B[k][u];
    							B[k][u]=t;
    						}
    			if(B[i][j]!=0)
                {
    				for(k=i+1;k<n;k++)
    				{
    					float tl=B[k][i]/B[i][j];
    					for(u=0;u<m;u++)
    						B[k][u]-=B[i][u]*tl;
    				}
    				break;
    			}
    		}
    	}
    	int r=0;
    	for(i=n-1;i>=0;i--)
        {
    		for(j=0;j<m;j++)
    			if(B[i][j]!=0)
    			{
    				r=i+1;
    				break;
    			}
    		if(r>0) break;
    	}
    	printf("        --------------------------------------------------------\n");
        printf("\n                       HANG CUA MA TRAN A LA: %d\n",r);

}
void thaotac(float *A[],int n, int m,int tt)
{
    if (tt==0)
    {
        printf("        --------------------------------------------------------\n");
        printf("        ||  CHON THAO TAC MA BAN MUON THUC HIEN TREN MA TRAN  ||\n");
        printf("        ||                   CHUYEN VI MA TRAN            1   ||\n");
        printf("        ||                     TINH DINH THUC             2   ||\n");
        printf("        ||                   MA TRAN NGHICH DAO           3   ||\n");
        printf("        ||                    HANG CUA MA TRAN            4   ||\n");
        printf("        ||                         XOA HANG               5   ||\n");
        printf("        ||                         XOA COT                6   ||\n");
        printf("        ||                      CONG MA TRAN              7   ||\n");
        printf("        ||                       TRU MA TRAN              8   ||\n");
        printf("        ||                  NHAN MA TRAN VOI 1 SO         9   ||\n");
        printf("        ||                     NHAN HAI MA TRAN           10  ||\n");
        printf("        ||  NEU BAN MUON THOAT CHUONG TRINH TINH BAM PHIM 11  ||\n");
        printf("        ||  CHON THAO TAC BAN MUON THUC HIEN TREN MA TRAN:    ||\n");
        scanf("%d",&tt);
        printf("        --------------------------------------------------------\n");
        switch(tt)
        {
            case 1: chuyenvi_MT(A,n,m); thaotac(A,n,m,0);
            case 2: dinhthuc_MT(A,n,m); thaotac(A,n,m,0);
            case 3: nghichdao_MT(A,n,m);thaotac(A,n,m,0);
            case 4: hang_MT(A,n,m); thaotac(A,n,m,0);
            case 5: xoahang_MT(A,n,m); thaotac(A,n,m,0);
            case 6: xoacot_MT(A,n,m); thaotac(A,n,m,0);
            case 7: cong_MT(A,n,m); thaotac(A,n,m,0);
            case 8: hieu_MT(A,n,m); thaotac(A,n,m,0);
            case 9: nhanmotso_MT(A,n,m); thaotac(A,n,m,0);
            case 10: nhanhai_MT(A,n,m); thaotac(A,n,m,0);
            case 11: break;

            }
    }
}
