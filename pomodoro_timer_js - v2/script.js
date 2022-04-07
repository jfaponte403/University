//start timer.
function startTimer(){

    //Data timer 1
    const time1 = document.getElementById("timer1");
    const timer1 = parseInt(time1.value);
    let timeTimer1 = timer1 * 60;
    console.log(timer1);

    //Data timer 2
    const time2 = document.getElementById("timer2");
    const timer2 = parseInt(time2.value);
    let timeTimer2 = timer2 * 60;
    console.log(timer2);

    //Data ID Pomodoro.
    const showTimer = document.getElementById("pomodoro");

    //validation data.
    if (timer1 < 0 || timer2 <0){
        alert("Entry a correct number.");
    } else if (timer1 < 20 || timer1 > 50){
        alert("Entry a time to work between 20 min to 50 min");
    } else if (timer2 < 5 || timer2 > 15){
        alert("Entry a time to reset between 5 min to 15 min");
    } else {

        //pomodoro timer 1.
        //first interval execute the function the timer 1.
        timerOne = setInterval(cycleTimer1,1000);

        function cycleTimer1(){
            //get time math floor approximate returns the smallest number to an integer
            const minutes = Math.floor(timeTimer1 / 60);
            //get seconds
            let seconds = timeTimer1 % 60;
            console.log(`timeTimer1 = ${timeTimer1} Minutes = ${minutes} Seconds = ${seconds}`);
            // Write on html.
            showTimer.innerHTML = `${minutes} : ${seconds}`;
            timeTimer1--;

            if (timeTimer1 === -1) {
                clearInterval(timerOne);
                // Call second Interval.
                timerTwo = setInterval(cycleTimer2, 1000);
            }
        }
        function cycleTimer2(){
            const minutes = Math.floor(timeTimer2 / 60);
            let seconds = timeTimer2 % 60;
            showTimer.innerHTML = `Reset: ${minutes} : ${seconds}`;
            timeTimer2--;
            if(timeTimer2 === -1){
                clearInterval(timerTwo);
                showTimer.innerHTML = `finish`;
            }
        }
    }
}

function activities (){
    const timeToWork = document.getElementById("timeToWork");
    const timeToWork1 = parseInt(timeToWork.value);
    const textToWork = document.getElementById("timeToActivity");
    let hour = 60 * 8;

    if(timeToWork1 > hour || timeToWork < 20){
        alert("Enter a correct number ( 20 since 60 ) minutes. ");
    } else {
        textToWork.innerHTML = `Time to: ${timeToWork1} min`;
    }

    const activity = document.getElementById("listToActivities").value;

    const textActivities = document.getElementById("activity");
    textActivities.innerText = `Current activity: ${activity}`;
}
