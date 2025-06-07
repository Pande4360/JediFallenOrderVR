#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AssetManager.hpp"
#include "SwAssetManager.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwAssetManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAssetManager");
    return result;
}
