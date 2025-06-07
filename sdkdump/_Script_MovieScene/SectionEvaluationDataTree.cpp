#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SectionEvaluationDataTree.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::SectionEvaluationDataTree::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.SectionEvaluationDataTree");
    return result;
}
