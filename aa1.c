#include <stdio.h>

int main()
{
	const float PUNTOSxEURO = 0.5;

	int producto;
	int producto_max;
	float precio;
	float precio_max;
	float total;
	float total_perfumeria;

	total = 0.0;
	precio_max = 0.0;
	producto_max = 0;
	total_perfumeria = 0;

	scanf("%d", &producto);

	while (producto > 0) {
		scanf("%f", &precio);
		total = total + precio;

		if (precio > precio_max)
		{
			precio_max = precio;
			producto_max = producto;
		}

		if (producto >= 350 && producto <= 400) {
			total_perfumeria = total_perfumeria + precio;
		}

		scanf("%d", &producto);
	}

	printf("%f\n", total);
	printf("%i\n", producto_max);
	printf("%f\n", PUNTOSxEURO * (total - total_perfumeria));
	printf("%f\n", total_perfumeria);

	return 0;
}