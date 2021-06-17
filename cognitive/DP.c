#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int target = 0;
char ftemp[] = "city022";
char fmichi[] = "city021";
float matching(char *ftemp, char *fmichi)
{
       	FILE *fp1,*fp2,*fp3,*fp4,*list,*test;
	char *flist = "list.txt";
	char *ftest = "test.txt";
	int n,m,k,i,j;
	char temp_file[100],michi_file[100];
	char temp_sund[100],michi_sund[100];
	int temp_fram,michi_fram;
	float temp[300][15],michi[300][15];
	float d[300][100],dd,g[300][100];
	float a,b,c;
	fp1 = fopen(ftemp,"r");
	if(fp1 == NULL){
	       	printf("cannot_read_tempfile\n");
	       	return 0;
       	}
	fscanf(fp1,"%s",temp_file);
	fscanf(fp1,"%s",temp_sund);
	fscanf(fp1,"%d",&temp_fram);
	n=0;
	while(fscanf(fp1,"%f %f %f %f %f %f %f %f %f %f %f %f %f %f %f",&temp[n][0],&temp[n][1],&temp[n][2],&temp[n][3],&temp[n][4],&temp[n][5],&temp[n][6],&temp[n][7],&temp[n][8],&temp[n][9],&temp[n][10],&temp[n][11],&temp[n][12],&temp[n][13],&temp[n][14]) != EOF){ n++;
       	}
	fclose(fp1);

	fp2 = fopen(fmichi,"r");
	if(fp2 == NULL){ printf("cannot_read_michifile\n");
		return 0;
       	}
	fscanf(fp1,"%s",michi_file);
	fscanf(fp1,"%s",michi_sund);
	fscanf(fp1,"%d",&michi_fram);
	n=0;
	while(fscanf(fp1,"%f %f %f %f %f %f %f %f %f %f %f %f %f %f %f",
&michi[n][0],&michi[n][1],&michi[n][2],&michi[n][3],&michi[n][4],&michi[n][5 ],
&michi[n][6],&michi[n][7],&michi[n][8],&michi[n][9],&michi[n][10],&michi[n][ 11],
&michi[n][12],&michi[n][13],&michi[n][14]) != EOF){ n++;
       	}
	fclose(fp2);

	dd = 0;
	for(n = 0;n < temp_fram;n++){
	       	for(k = 0;k < michi_fram;k++){ for(m = 0;m < 15;m++){
	       		dd = dd + pow( (temp[n][m] - michi[k][m]),2);
	       	}
	       	d[n][k] = sqrt(dd); dd = 0;
	       	}
       	}
	fclose(fp3);
	g[0][0] = d[0][0];
	i = 0; j = 0;
	{
		a = d[i + 1][j];
		b = d[i][j + 1];
		c = 2 * d[i + 1][j + 1];
		if(a == b || a == c || (a < b && a < c) || j == (michi_fram - 1)){
		       	g[i+1][j] = g[i][j]+ a;i++; j++;
	       	}
		else{
		       	printf("a = %f/b = %f/c = %f¥nerror!!!!\n",a,b,c);
			list = fopen(flist,"a");
			fprintf(list,"%s\t",temp_file); fprintf(list,"%s\t",temp_sund);
			fprintf(list,"%s\t",michi_file); fprintf(list,"%s\t",michi_sund);
			fprintf(list,"%f\n",g[i][j] / (temp_fram + michi_fram)); fclose(list);
			return 0;
		}
		double com(void){
			FILE *fpx; FILE *result;
			char *flist = "list.txt";
			char *fresult = "result.txt";
			char ftemp_file[101][30],ftemp_sund[101][30];
			char fmichi_file[101][30],fmichi_sund[101][30];
			float fg[150],min;
			int n,m,w;
			double win;
			fpx = fopen(flist,"r");
			if(fpx == NULL){ printf("cannot_read_list_file.txt\n");
		       	}
			n = 0;
			while(fscanf(fpx,"%s\t%s\t%s\t%s\t%f\n", ftemp_file[n],ftemp_sund[n], fmichi_file[n],fmichi_sund[n], &fg[n]) != EOF){
			       	n++;
		       	}
		       	fclose(fpx); w = 0; min = fg[0];
		       	for(m = 0;m < n;m++){ if(min > fg[m]){
			       	min = fg[m]; w = m;
		       	}
		       	}
		       	result = fopen(fresult,"a");
		       	fprintf(result,"%s\t%s\t%s\t%s\t%f\n",ftemp_file[w],ftemp_sund[w],fmichi_file[w],fmichi_sund[w],fg[w]);
		       	fclose(result);
		       	return 0;
	       	}
		int main(){
			FILE *fpx,*result;
			char *flist = "list.txt";
			char *fresult = "result.txt";
			char temp_filename[101][30],michi_filename[101][30];
			char ftemp_file[300][30],fmichi_file[300][30];
			char ftemp_sund[300][30],fmichi_sund[300][30];
			int n,m,k,cot;
			double win,full;
			float fg[300];
			fpx = fopen(flist,"w");
			fclose(fpx);
			result = fopen(fresult,"r");
			if(result == NULL){ 
				target = 0;
				printf("make_'result.txt'\n");
		       	}
			else{ for(m =0;fscanf(result,"%s\t%s\t%s\t%s\t%f\n",ftemp_file[m],ftemp_sund[m],fmichi_file[m],fmichi_sund[m],&fg[m]) != EOF;m++){
		       	}
		       	target = m;
		       	}
		       	fclose(result);
		       	for(m = 0;m < 100;m++){
				sprintf(temp_filename[m],"%s/%s_%03d.txt",ftemp,ftemp,m+1);
		       	}
			for(m = 0;m < 100;m++){
				sprintf(michi_filename[m],"%s/%s_%03d.txt",fmichi,fmichi,m+1);
		       	}
			for(m = 0;(m < 100) && (target !=100);m++){
			       	matching(temp_filename[target],michi_filename[m]);
		       	}
			if(target < 100){ com();
		       	}
			else{ printf("full\n");
		       	}
			result = fopen(fresult,"r");
			win = 0; full = 0;
			for(m = 0;fscanf(result,"%s\t%s\t%s\t%s\t%f\n",ftemp_file[m],ftemp_sund[m],fmichi_file[m],fmichi_sund[m],&fg[m]) != EOF;m++){ printf("%d",m+1);
				if(strcmp(ftemp_sund[m], fmichi_sund[m]) == 0 && ftemp_sund[m]){
				       	win = win + 1;
					printf("*");
			       	}
				printf("%s\t%s\t%f\n",ftemp_sund[m],fmichi_sund[m],fg[m]);
			       	full = full + 1;
		       	}
		       	fclose(result);
		       	printf("正解率%lf%%\n",(win/full)*100);
	       	}
       	}
       	return 0;

}
