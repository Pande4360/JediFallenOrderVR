#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDirectionalAnimData.hpp"
#include "RsSingleSyncData.hpp"
#include "RsSyncDefinition.hpp"
_Script_RsGameTechRT::RsSyncDefinition*& _Script_RsGameTechRT::RsSingleSyncData::get_SyncDef() {
    return *(_Script_RsGameTechRT::RsSyncDefinition**)((uintptr_t)this + 0x30);
}
bool _Script_RsGameTechRT::RsSingleSyncData::get_bUseReactorAsMasterForSync() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSingleSyncData::set_bUseReactorAsMasterForSync(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSingleSyncData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSingleSyncData");
    return result;
}
