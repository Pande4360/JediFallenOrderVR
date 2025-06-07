#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDirectionalAnimData.hpp"
#include "RsSwingDirectionBasedSyncData.hpp"
#include "RsSyncDefinition.hpp"
void* _Script_RsGameTechRT::RsSwingDirectionBasedSyncData::get_DirectionalSyncDefDataMapping() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_RsGameTechRT::RsSyncDefinition*& _Script_RsGameTechRT::RsSwingDirectionBasedSyncData::get_DefaultSyncDef() {
    return *(_Script_RsGameTechRT::RsSyncDefinition**)((uintptr_t)this + 0x80);
}
bool _Script_RsGameTechRT::RsSwingDirectionBasedSyncData::get_bUseReactorAsMasterForSync() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSwingDirectionBasedSyncData::set_bUseReactorAsMasterForSync(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSwingDirectionBasedSyncData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSwingDirectionBasedSyncData");
    return result;
}
