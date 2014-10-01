

#import <Foundation/Foundation.h>

@interface DVTWeakCallBack : NSObject
{
    id _callback_next;
    CDUnknownFunctionPointerType _callback_function;
    id _callback_target;
}

@end

