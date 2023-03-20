/**
 * _abs - compute absolute value of an integer
 * @r: integer variable
 * Return: absolute value
 */
int _abs(int r)
{

	if (r < 0)
	{
		r *= -1;
	}
	else
	{
		r = r + 0;
	}
	return (r);
}
