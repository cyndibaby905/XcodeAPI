

#import <IDEFoundation/IDETestRunner.h>

@interface IDEStandardTestRunner : IDETestRunner
{
    id <IDEBuildableProduct> _buildableProduct;
}

@property(retain) id <IDEBuildableProduct> buildableProduct; // @synthesize buildableProduct=_buildableProduct;
- (id)testBundlePathForBuildParameters:(id)arg1 runDestination:(id)arg2 testRunIdentifier:(id)arg3 testRunIdentifiers:(id)arg4;
- (id)pathForBuildableProduct:(id)arg1 withBuildParameters:(id)arg2 runDestination:(id)arg3;
- (id)testListWithWorkspace:(id)arg1 supportMultiple:(BOOL)arg2 supportInverse:(BOOL)arg3 invert:(char *)arg4;
- (id)testRunIdentifiersForBuildParameters:(id)arg1 runDestination:(id)arg2;
- (id)architectureForBuildParameters:(id)arg1 runDestination:(id)arg2 testRunIdentifier:(id)arg3 testRunIdentifiers:(id)arg4;
- (id)launchNameForBuildParameters:(id)arg1 runDestination:(id)arg2 testRunIdentifier:(id)arg3 testRunIdentifiers:(id)arg4;
- (id)workingDirectoryForWorkspace:(id)arg1;
- (id)environmentVariablesForBuildParameters:(id)arg1 runDestination:(id)arg2 testRunIdentifier:(id)arg3 testRunIdentifiers:(id)arg4 error:(id *)arg5;
- (id)environmentVariablesForBuildParameters:(id)arg1 runDestination:(id)arg2 testRunIdentifier:(id)arg3 testRunIdentifiers:(id)arg4;
- (id)testHostRunnableForRunDestination:(id)arg1 buildParameters:(id)arg2 outError:(id *)arg3;
- (id)defaultTestEnvironmentVariablesForBuildParameters:(id)arg1 runDestination:(id)arg2 workspace:(id)arg3 error:(id *)arg4;
- (id)initWithBuildableProduct:(id)arg1;
- (id)init;

@end

