#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsSyncManager.hpp"
#include "SwSyncManager.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwSyncManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwSyncManager");
    return result;
}
