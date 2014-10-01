

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@class DVTFilePath, IDEActivityLogSection, NSString;

@interface IDEBuilderGeneratedFileInfo : NSObject <NSCoding>
{
    int _buildCommand;
    DVTFilePath *_sourceFilePath;
    DVTFilePath *_generatedFilePath;
    int _commandResult;
    NSString *_errorString;
    IDEActivityLogSection *_commandLogSection;
}

@property(readonly) IDEActivityLogSection *commandLogSection; // @synthesize commandLogSection=_commandLogSection;
@property(readonly) NSString *errorString; // @synthesize errorString=_errorString;
@property(readonly) int commandResult; // @synthesize commandResult=_commandResult;
@property(readonly) DVTFilePath *generatedFilePath; // @synthesize generatedFilePath=_generatedFilePath;
@property(readonly) DVTFilePath *sourceFilePath; // @synthesize sourceFilePath=_sourceFilePath;
@property(readonly) int buildCommand; // @synthesize buildCommand=_buildCommand;
- (NSString *)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBuildCommand:(int)arg1 sourceFilePath:(id)arg2 generatedFilePath:(id)arg3 commandResult:(int)arg4 errorString:(id)arg5 commandLogSection:(id)arg6;

@end

