
#include<stdio.h>
/*
use <% %> instead of { }
use <: :> instead of [ ]
*/
int main()
<%
	int arr <:10:>;
	arr<:0:> = 1;
	printf("%d", arr<:0:>);

	return 0;
%>
