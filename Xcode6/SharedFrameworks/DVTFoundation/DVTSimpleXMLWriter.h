

#import <Foundation/Foundation.h>

@class NSMutableArray, NSMutableData;

@interface DVTSimpleXMLWriter : NSObject
{
    NSMutableData *_xmlData;
    NSMutableArray *_openContainers;
    long long _indentationLevel;
    BOOL _isInsideTag;
    BOOL _isInsideContainerTag;
}

- (id)stringValue;
- (id)data;
- (void)finishWriting;
- (void)writeContent:(id)arg1;
- (void)writeContent:(id)arg1 withIndentation:(BOOL)arg2;
- (void)writeContent:(id)arg1 withIndentation:(BOOL)arg2 withNewline:(BOOL)arg3;
- (void)endContainer;
- (void)endContainerWithNewline:(BOOL)arg1;
- (void)endStartTag;
- (void)endStartTagWithNewline:(BOOL)arg1;
- (char *)_endStartTagString;
- (void)writeAttribute:(id)arg1 value:(id)arg2;
- (void)beginStartTag:(id)arg1;
- (void)beginStartTag:(id)arg1 isContainer:(BOOL)arg2;
- (void)writeRawUTF8:(const char *)arg1;
- (id)init;
- (id)initForWritingWithMutableData:(id)arg1;
- (void)writeXMLEpilogue;
- (void)writeXMLPrologue;

@end
