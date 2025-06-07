#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsMasterSyncInstance.hpp"
#include "SwMasterSyncInstance.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwMasterSyncInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwMasterSyncInstance");
    return result;
}
