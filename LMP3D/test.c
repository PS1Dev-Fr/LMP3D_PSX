#define PI 3.14159265358979323846f


float LMP3D_cosf(float x)
{
	x += (float)PI/2.0f;
	int q = (x * 6.3661977236758138e-1f) +0.5f; //floor

	float t = x - q * 1.5707963267923333e+00f;
	t = t - q * 2.5633441515945189e-12f;

	float t2 = t * t;
	if (q & 1)
		t = ((-1.36058866707554670912e-03f * t2 + 4.16566258031673830195e-02f) * t2 - 4.99998875577611430384e-01f) * t2 + 9.99999980750852337007e-01f;
	else
		t = (((-1.94842039748219288187e-04f * t2 + 8.33179571459221545387e-03f) * t2 - 1.66666423796176028737e-01f) * t2 + 9.99999989793669848536e-01f) * t;

	if (q & 2) t = -t;

	return t;
}