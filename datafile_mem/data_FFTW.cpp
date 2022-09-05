#define _USE_MATH_DEFINES
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <fftw3.h>
using namespace std;
// #pragma comment(lib, "libfftw3-3.lib") // double版本; 仅适用于VC
// #pragma comment(lib, "libfftw3f-3.lib")// float版本; 仅适用于VC
// #pragma comment(lib, "libfftw3l-3.lib")// long double版本; 仅适用于VC

#define PI M_PI

int main()
{
	const int N = 8192;
	double *in = NULL;
	// 如果要使用float版本,需先引用float版本的lib库,然后在fftw后面加上f后缀即可.
	fftw_complex *out = NULL;// fftwf_complex --> 即为float版本
	fftw_plan p;
	in  = (double *)fftw_malloc(sizeof(double) * N);
	out = (fftw_complex *)fftw_malloc(sizeof(fftw_complex) * N);

	// double srate = 1000e6;
	// double frex = 200e6;
	int kv = 160;

	// 输入纯实数
	for (int i = 0; i < N; i++)
	{
		in[i] = sin(2*PI * kv/N *i);

		// printf("%.2f ", in[i]);
	}
	cout<<"signal generated"<<endl;

	// 傅里叶变换
	p = fftw_plan_dft_r2c_1d(N, in, out, FFTW_ESTIMATE);
	fftw_execute(p);

	// 输出功率谱
	double power[N];
	for (int k = 0; k < N; k++)
	{
		// power[k] = out[k][0]*out[k][0] + out[k][1]*out[k][1];
		power[k] = pow(out[k][0]/N,2) + pow(out[k][1]/N,2);
		// printf("%.2f ", power);
	}
	cout<<"Power spectrum done"<<endl;
	cout << power[160]<<endl;
	cout << power[161]<<endl;
	cout << power[159]<<endl;
	// 释放资源
	fftw_destroy_plan(p);
	fftw_free(in);
	fftw_free(out);

	system("pause");
	// cout << "Pi is:"<<PI;
	return 0;
}