

#import <Foundation/Foundation.h>

@protocol DVTXMLUnarchiverDelegate;

@interface DVTXMLUnarchiver : NSObject
{
    NSData *_data;
    id _delegate;
    NSMutableDictionary *_elementNamesToClasses;
    id _rootObject;
    NSError *_decodingError;
    id _context;
    CDUnknownBlockType _versionChecker;
    struct {
        unsigned int _unused:31;
        unsigned int _respondsTo_XMLUnarchiver_didReadToPosition_ofTotal_;
    } _delegateFlags;
    BOOL _rootObjectPropertiesSet;
    BOOL _hasReadArchive;
    BOOL _archiveContainedUnsupportedNodes;
    NSError *_xmlParserError;
}

+ (BOOL)unarchiveData:(id)arg1 withRootObject:(id)arg2 error:(id *)arg3;
+ (id)unarchiveObjectWithData:(id)arg1;
+ (void)setElementNamePrefix:(id)arg1;
+ (Class)classForElementName:(id)arg1;
+ (void)setClass:(Class)arg1 forElementName:(id)arg2;
+ (void)initialize;
@property(copy) NSError *xmlParserError; // @synthesize xmlParserError=_xmlParserError;
@property(copy) NSError *decodingError; // @synthesize decodingError=_decodingError;
@property(retain, nonatomic) id <DVTXMLUnarchiverDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL archiveContainedUnsupportedNodes; // @synthesize archiveContainedUnsupportedNodes=_archiveContainedUnsupportedNodes;
@property(copy) CDUnknownBlockType versionChecker; // @synthesize versionChecker=_versionChecker;
@property(retain) id context; // @synthesize context=_context;
- (id)_corruptedDocumentErrorWithUnderlyingErrorCode:(unsigned long long)arg1 reason:(id)arg2;
- (id)_genericUnreadableDocumentError;
- (void)finishDecoding;
- (BOOL)decodeWithRootObject:(id)arg1 error:(id *)arg2;
- (id)decodeRootObject;
- (BOOL)_readAndReturnError:(id *)arg1;
- (BOOL)decodeNodeWithXMLTextReader:(struct _xmlTextReader *)arg1 owner:(id)arg2 container:(id)arg3 parsingState:(id)arg4 error:(id *)arg5;
- (void)_captureUnhandleableElementInContainer:(id)arg1 withXMLTextReader:(struct _xmlTextReader *)arg2;
- (void)_moveToCurrentNodeEndElementWithXMLTextReader:(struct _xmlTextReader *)arg1;
- (id)decodeElementNodeWithXMLTextReader:(struct _xmlTextReader *)arg1 owner:(id)arg2 container:(id)arg3 parsingState:(id)arg4 success:(char *)arg5 error:(id *)arg6;
- (Class)classForUnarchivedObjectFromElementNodeWithXMLTextReader:(struct _xmlTextReader *)arg1 owner:(id)arg2;
- (void)setRootObject:(id)arg1;
- (Class)classForElementName:(id)arg1;
- (void)setClass:(Class)arg1 forElementName:(id)arg2;
- (id)init;
- (id)initForReadingWithData:(id)arg1;

@end

