#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "SwQuicksandSettingsDataAsset.hpp"
void* _Script_SwGame::SwQuicksandSettingsDataAsset::get_QuicksandParameters() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_SwGame::SwQuicksandSettingsDataAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwQuicksandSettingsDataAsset");
    return result;
}
