#include <objc/runtime.h>

typedef const void *MSImageRef;
MSImageRef MSGetImageByName(const char *file);
void *MSFindSymbol(MSImageRef image, const char *name);

void MSHookFunction(void *symbol, void *replace, void **result);

void MSHookMemory(void *target, const void *data, size_t size);

void MSHookMessageEx(Class _class, SEL sel, IMP imp, IMP *result);
