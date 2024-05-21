#include <unistd.h>

int	ft_atoi(const char *nptr)
{
	int	n;
	int	sign;
	int	res;

	n = 0;
	sign = 1;
	res = 0;
	while (nptr[n] == ' ' || nptr[n] == '\n' || nptr[n] == '\t'
		|| nptr[n] == '\v' || nptr[n] == '\f' || nptr[n] == '\r')
		n++;
	if (nptr[n] == '-' || nptr[n] == '+')
	{
		if (nptr[n] == '-')
			sign = -1;
		n += 1;
	}
	while (nptr[n] >= '0' && nptr[n] <= '9')
	{
		res = res * 10;
		res = res + (nptr[n] - '0');
		n++;
		if (nptr[n] < '0' || nptr[n] > '9' || nptr[n] == '\0')
			return (res * sign);
	}
	return (0);
}

int fibonacci(int num){
    int fibo = 0;
    for (int i = 0; i < num; i++){
        fibo += (i + 1) + 2;
    }
    return fibo;
}

int calculate_base(int num){
    int laps = 1;
    int increase = 6;
    int base = 5;
    int rows = fibonacci(num);
    while (laps < num){
        int i = 1;
        while (i < laps + 2){
            base += 2;
            i++;
        }
        if (laps % 2 == 0)
            increase += 2;
        base += increase;
        laps++;
    }
    if (num > 1){
        if (num % 2 == 0)
            base += num;
        else
            base += num - 1;
    }
    return base;
}

void    ft_print(int i, int len, int checker, int num, int dollar){
    len += 2;
    num += 2;
    if (num % 2 == 0)
        num -= 1;
    int mid = len / 2;
    int doorst = mid - num / 2;
    int doorf = mid + num / 2;
    int start = mid - i / 2;
    int end = mid + i / 2;
    int pos = 0;
    while (pos < start){
        write(1, " ", 1);
        pos++;
    }
    write(1, "/", 1);
    while (pos <= end){
        if (checker > 0 && dollar > 0 && pos == doorf - 2){
            write(1, "$", 1);
            pos++;
        }
        if (checker > 0 && (pos > doorst && pos < doorf)){
            write (1, "|", 1);
            pos++;
        }
        else{
            write(1, "*", 1);
            pos++;
        }
    }
    write(1, "\\", 1);
    while (pos < len){
        write(1, " ", 1);
        pos++;
    }
    write(1, "\n", 1);
}

void    ft_draw(int len, int laps, int num){
    int increase = 2;
    int base = 1;
    int rows = fibonacci(num);
    while (laps < num){
        int i = 0;
        int checker = 0;
        int dollar = 0;
        while (i < laps + 3){
            if (laps == num - 1){
                if (num % 2 == 0 && i > 2 || num % 2 != 0 && i > 1){
                    checker = 1;
                }
                if (num > 4 && checker == 1){
                    if (num % 2 == 0 && i == (laps + 3 - (num / 2)))
                        dollar = 1;
                    else if (num % 2 != 0 && i + 1 == (laps + 3 - (num / 2)))
                        dollar = 1;
                }
            }
            ft_print(base, len, checker, num, dollar);
            dollar = 0;
            base += 2;
            i++;
        }
        if (laps % 2 == 0)
            increase += 2;
        base += increase;
        laps++;
    }
    if (num > 1){
        if (num % 2 == 0)
            base += num;
        else
            base += num - 1;
    }
}

int main(int argc, char **argv){
    if (argc == 2)
    {
        int num = ft_atoi(argv[1]);
        if (num > 0)
        {
            int laps = 0;
            int rows = fibonacci(num);
            int base = calculate_base(num);
            ft_draw(base, laps, num);
            }
        }
    return 0;
}
