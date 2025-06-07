#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsSlaveSyncInstance.hpp"
#include "SwSlaveSyncInstance.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwSlaveSyncInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwSlaveSyncInstance");
    return result;
}
