
/**
 * This code was generated by "react-native codegen-harmony"
 *
 * Do not edit this file as changes may cause incorrect behavior and will be
 * lost once the code is regenerated.
 *
 * @generatorVersion: 2
 */
#include "RNCAsyncStorage.h"

namespace rnoh {
using namespace facebook;

RNCAsyncStorage::RNCAsyncStorage(const ArkTSTurboModule::Context ctx, const std::string name) : ArkTSTurboModule(ctx, name) {
    methodMap_ = {
        ARK_METHOD_METADATA(multiGet, 2),
        ARK_METHOD_METADATA(multiSet, 2),
        ARK_METHOD_METADATA(multiRemove, 2),
        ARK_METHOD_METADATA(multiMerge, 2),
        ARK_METHOD_METADATA(getAllKeys, 1),
        ARK_METHOD_METADATA(clear, 1),
    };
}

} // namespace rnoh
