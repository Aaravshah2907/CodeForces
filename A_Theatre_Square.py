n, m, a = map(int, input().split())
n_calc = n // a + (n % a > 0)
m_calc = m // a + (m % a > 0)
print(n_calc * m_calc)