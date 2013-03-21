using namespace aaud;

typedef std::map<Makam, Profile> Model;

void add_to_model(Model &model, Makam &makam, Profile &profile)
{

}

void train_model(Model &model, std::list<TrainingExample> &examples)
{

  for(TrainingExample &example : examples) {
    Audio audio(example.filename);
    Makam makam(example.makam_name);

    Chromagram chromagram(audio);
    vector<NKlang<2>> nklangs = chromagram.get_nklangs();
    Profile profile(nklangs);

    add_to_model(model, makam, profile);
  }

  return model;
}

void save_model(Model *model)
{
  // save as json
}

int main(int argc, char **argv) {

  Model model;

}
