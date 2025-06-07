#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_MovieScene {
struct MovieSceneTrack;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneEvaluationTrack {
    private: char pad_0[0xf8]; public:
    void* get_ObjectBindingId();
    void* get_EvaluationPriority();
    void* get_EvaluationMethod();
    void* get_Segments();
    _Script_MovieScene::MovieSceneTrack*& get_SourceTrack();
    void* get_EvaluationTree();
    void* get_ChildTemplates();
    void* get_TrackTemplate();
    void* get_EvaluationGroup();
    bool get_bEvaluateInPreroll();
    void set_bEvaluateInPreroll(bool value);
    bool get_bEvaluateInPostroll();
    void set_bEvaluateInPostroll(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
