#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\KeyHandleLookupTable.hpp"
#include "MovieSceneKeyHandleMap.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneKeyHandleMap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneKeyHandleMap");
    return result;
}
