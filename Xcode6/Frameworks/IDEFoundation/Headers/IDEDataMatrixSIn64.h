

#import <IDEFoundation/IDEDataMatrix.h>

@interface IDEDataMatrixSIn64 : IDEDataMatrix

- (unsigned long long)rowCount;
- (void)executeRowOperation:(const struct _IDEDataMatrixRowOp *)arg1 overColumns:(id)arg2;
- (long long)SInt64AtRow:(unsigned long long)arg1 column:(unsigned char)arg2;
- (void)addSInt64Rows:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateInt64Range:(NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1 descriptor:(struct _IDEDataMatrixDescriptor *)arg2;

@end

