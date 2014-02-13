#ifndef __RANDOM_H__
#define __RANDOM_H__
class Random{
public:
    Random(uint32_t);
    
    uint32_t next()
private:
    uint32_t _seed;


};
#endif
