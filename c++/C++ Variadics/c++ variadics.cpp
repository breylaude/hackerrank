template<bool... digits>
uint64_t reversed_binary_value()
{
    uint64_t pos = 1;
    uint64_t result = 0;
    auto _ = { (result += digits * pos, pos <<= 1)... };
    return result;
}
