

#import <Foundation/Foundation.h>

@class DVTExtension, DVTFileDataType, NSArray;

@interface DVTFileDataTypeDetectionMagicCache : NSObject
{
    DVTExtension *_extension;
    DVTFileDataType *_matchedType;
    DVTFileDataType *_detectedType;
    NSArray *_magicWords;
}

@property(readonly) NSArray *magicWords; // @synthesize magicWords=_magicWords;
@property(readonly) DVTFileDataType *detectedType; // @synthesize detectedType=_detectedType;
@property(readonly) DVTFileDataType *matchedType; // @synthesize matchedType=_matchedType;
- (id)initWithExtension:(id)arg1;

@end

