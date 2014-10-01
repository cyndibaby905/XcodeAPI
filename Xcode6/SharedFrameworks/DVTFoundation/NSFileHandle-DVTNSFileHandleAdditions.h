

#import <Foundation/Foundation.h>

@interface NSFileHandle (DVTNSFileHandleAdditions)
- (BOOL)dvt_writeFormat:(id)arg1;
- (BOOL)dvt_writeFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (BOOL)dvt_writeString:(id)arg1;
- (BOOL)dvt_writeString:(id)arg1 error:(id *)arg2;
- (BOOL)dvt_writeData:(id)arg1 error:(id *)arg2;
- (id)dvt_duplicateFileHandleWithError:(id *)arg1;
@end

