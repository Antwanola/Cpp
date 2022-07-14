#include<iostream>
#include<list>
using namespace std;



class youTubeChannel {
    private:
        string Name;        
        int SubscribersCount;
        list<string> PublishedVideos;

    protected:
        string OwnersName;
        int ContentQuality;

    public:
        youTubeChannel(){
            Name;
            OwnersName;
            SubscribersCount = 0;
            ContentQuality = 0;

        }

        void getInfo(){
        cout <<"Channel Name: "<< Name<< endl;
        cout <<"Channel ownerName: "<< OwnersName<< endl;
        cout <<"Channel subscribersCount: "<< SubscribersCount<< endl;
        cout<<"Vidoes: \n";
        for( string videoTitle:PublishedVideos){
            cout<< videoTitle<< endl;
}
        }

        void publish(string title){
            PublishedVideos.push_back(title);
        }

        int subscribe(){
           return  SubscribersCount++;
        }
        int unsubscribe(){
            if(SubscribersCount == 0)
            return SubscribersCount;
            return SubscribersCount--;
        }

        void setName(string name){
            Name = name;
            // return Name;
        }

        void setOwnersName( string ownersName){
            OwnersName = ownersName;
            // return OwnersName;
        }

        void checkAnalitics(){
            if(ContentQuality<5)
            cout<<OwnersName<<" has a bad content quality.\n";
            else
            cout<<OwnersName<<" has a great content quality\n";
        }

};


class CookingChannel: public youTubeChannel{
    public:
    CookingChannel():youTubeChannel(){       

    }
    void practice(){
        cout << OwnersName<<" is practicing cooking"<< endl;
        ContentQuality++;
    }

};

int main(){
CookingChannel ytCookingChannel;

youTubeChannel * ytCooking = &ytCookingChannel;
ytCookingChannel.setName(" Antwan");
ytCookingChannel.setOwnersName("Cook Antwan");
ytCookingChannel.subscribe();
ytCookingChannel.publish("Making pasta");
ytCookingChannel.getInfo();
ytCookingChannel.practice();
ytCookingChannel.practice();
ytCookingChannel.practice();
ytCookingChannel.practice();
ytCookingChannel.practice();
ytCooking->checkAnalitics();

// youTubeChannel ytchannel;
// ytchannel.setName("antwan");
// ytchannel.ownersName("antwanola29@gmail.com");
// ytchannel.subscribe();
// ytchannel.subscribe();
// ytchannel.subscribe();
// ytchannel.unsubscribe();

// ytchannel.publish("javascript learning");
// ytchannel.publish("Solidity");
// ytchannel.publish("Understanding Rust");
// ytchannel.publish("Benefits of EOS");
// ytchannel.name = "Antwan Channel";
// ytchannel.ownerName = "Antwan Ola";
// ytchannel.publishedVideos = {"javascript learning","Understanding Rust" "Benefits of EOS", "Solidity few keys"};
// ytchannel.subscribersCount = 23;
  



    system("pause >0");
}
