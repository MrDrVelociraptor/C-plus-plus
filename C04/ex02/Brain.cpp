#include "Brain.hpp"

void	copy_ideas( std::string *ideas_dst, const std::string *ideas_src ) {

	for (int i = 0; i < 100; i++)
	{
		ideas_dst[i] = ideas_src[i];
	}

}

void	set_ideas( std::string *ideas ) {

	std::string pool[100] = {"rescue", "peace", "obnoxious", "entertain", "toad", "puffy", "flash", "auspicious", "mindless",
	"daily", "tasteful", "fasten", "club", "soggy", "educate", "nest", "earthy", "avoid", "laugh", "tie",
	"hilarious", "quiet", "measly", "birthday", "spiritual", "wakeful", "zipper", "tightfisted",
	"animal", "crack", "replace", "grumpy", "stretch", "faithful", "parched", "bored", "pigs", "duck",
	"macabre", "bulb", "prickly", "cloud", "devilish", "waiting", "enthusiastic", "line", "look", "expand",
	"milk", "silent", "blush", "wilderness", "old-fashioned", "river clover", "cloth", "trucks",
	"squealing", "tangible", "toy", "jellyfish", "rhyme", "smart", "poke", "view", "observation", "boring",
	"open", "nosy", "apparel", "left", "foregoing", "maid", "profuse", "immense", "snakes", "pull",
	"material", "school", "cent", "bounce", "metal", "mitten", "religion", "beds", "bomb", "yell", "bless",
	"pick", "crayon", "cable", "difficult", "race", "payment", "tricky", "spare", "suck", "drown", "future",
	"fire"};

	copy_ideas(ideas, pool);
}

Brain::Brain() {
	std::cout << "I'm a brian" << std::endl;
	set_ideas(_ideas);
}

Brain::Brain(const Brain& copy) {
	copy_ideas(this->_ideas, copy._ideas);
	std::cout << "I'm a brian copy" << std::endl;
}

Brain::~Brain() {
	std::cout << "BYE BRIAN" << std::endl;
}

Brain&	Brain::operator=(const Brain& copy) {
	copy_ideas(this->_ideas, copy._ideas);
	std::cout << "More brian copies" << std::endl;
	return (*this);
}

void	Brain::randomThought( int index ) const {
	std::cout << _ideas[index];
}
