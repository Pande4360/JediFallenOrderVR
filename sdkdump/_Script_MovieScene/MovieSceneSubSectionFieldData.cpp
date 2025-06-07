#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSubSectionFieldData.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSubSectionFieldData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSubSectionFieldData");
    return result;
}
